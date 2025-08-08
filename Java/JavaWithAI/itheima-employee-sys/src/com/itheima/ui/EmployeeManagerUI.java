package com.itheima.ui;

import com.itheima.bean.Employee;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.util.ArrayList;
import java.util.Date;

public class EmployeeManagerUI extends JFrame{
    private JFrame frame; // 窗口
    private JTable table;  // 表格
    private DefaultTableModel model; // 表格模型: 封装表格数据的对象
    private JTextField nameTextFieldSearch; // 搜索输入框
    private ArrayList<Employee> employees = new ArrayList<>();

    public EmployeeManagerUI() {}

    public EmployeeManagerUI(String userName) {
        super("欢迎"+userName+"进入人事管理系统");
        frame = this;
        initialize();
        this.setVisible(true); // 显示窗口
    }

    private void initialize() {
        this.setBounds(480, 200, 800, 600);

        // 设置关闭窗口时退出程序。
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // 设置主容器使用 BorderLayout 布局，便于组织上下左右和中间区域。
        this.getContentPane().setLayout(new BorderLayout());

        // 输入框和搜索按钮,并使用居中的流式布局
        JPanel topPanel = new JPanel();
        topPanel.setLayout(new FlowLayout(FlowLayout.CENTER));

        nameTextFieldSearch = new JTextField(20);
        JButton btnSearch = new JButton("搜索");
        JButton btnAdd = new JButton("添加");
        topPanel.add(nameTextFieldSearch);
        topPanel.add(btnSearch);
        topPanel.add(btnAdd);

        // 创建表格模型
        model = new DefaultTableModel(
                new Object[][]{},
                new String[]{"ID", "姓名", "性别", "年龄", "电话" ,"职位", "入职日期", "薪水", "部门"}
        ){
            @Override
            public boolean isCellEditable(int row, int column) {
                return true; // 设置所有单元格为不可编辑
            }
        };

        // 创建表格控件并绑定模型
        table = new JTable(model);
        // 使用滚动面板包裹表格以支持滚动。
        JScrollPane scrollPane = new JScrollPane(table);
        // 设置每行高度为 30 像素。
        table.setRowHeight(30);

        // 添加数据到表格
        for (int i = 0; i < 2; i++) {
            model.addRow(new Object[]{i + 1, "员工" + (i + 1),  "男",  21, "18667656520", "java工程师", new Date().toLocaleString(), 30000, "部门" + (i + 1)});
            employees.add(new Employee(i + 1, "员工" + (i + 1),  "男",  21, "18667656520", "java工程师", new Date().toLocaleString(), 30000, "部门" + (i + 1)));
        }

        // 右键菜单
        JPopupMenu popupMenu = new JPopupMenu();
        JMenuItem editItem = new JMenuItem("编辑");
        JMenuItem deleteItem = new JMenuItem("删除");
        popupMenu.add(editItem);
        popupMenu.add(deleteItem);
        table.addMouseListener(new MouseAdapter() {
            @Override
            public void mousePressed(MouseEvent e) {
                if (e.getButton() == MouseEvent.BUTTON3) { // 明确检查是否为鼠标右键
                    int row = table.rowAtPoint(e.getPoint());
                    if (row >= 0) {
                        table.setRowSelectionInterval(row, row);
                        popupMenu.show(table, e.getX(), e.getY());
                    }
                }
            }
        });

        // 绑定事件到菜单项
        editItem.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int selectedRow = table.getSelectedRow();
                if (selectedRow >= 0) {
                    int id = (Integer) model.getValueAt(selectedRow, 0); // 假设ID在第一列
                    JOptionPane.showMessageDialog(frame, "删除 ID: " + id);
                    // 这里可以添加编辑逻辑，比如打开一个新的对话框让用户修改数据
                }
            }
        });

        deleteItem.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int selectedRow = table.getSelectedRow();
                if (selectedRow >= 0) {
                    int id = (Integer) model.getValueAt(selectedRow, 0); // 假设ID在第一列
//                    JOptionPane.showMessageDialog(frame, "删除 ID: " + id);
                    // 这里可以添加删除逻辑，比如从模型中移除该行
                    deleteEmployee(id);
                }
            }
        });

        // 搜索按钮监听器
        btnSearch.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String searchValue = nameTextFieldSearch.getText();
                // 这里可以添加搜索逻辑
            }
        });

        // 添加按钮监听器
        btnAdd.addActionListener(e-> {
            new AddEmployeeUI(this);
        });

        frame.getContentPane().add(topPanel, BorderLayout.NORTH);
        frame.getContentPane().add(scrollPane, BorderLayout.CENTER);
    }

    public void deleteEmployee(int id) {
        for (int i = 0; i < employees.size(); i++) {
            Employee employee = employees.get(i);
            if (employee.getId() == id) {
                employees.remove(i);
                model.removeRow(i);
                break;
            }
        }
    }

    public void addEmployee(Employee employee) {
        employees.add(employee);
        model.addRow(new Object[]{employee.getId(), employee.getName(), employee.getSex(), employee.getAge(), employee.getPhone(), employee.getPosition(), employee.getEntryDate(), employee.getSalary(), employee.getDepartment()});
    }
}