#pragma once

//��ȡ�ļ������������buff��
//buffΪһ��ָ�����飬ÿһ��Ԫ����һ���ַ�ָ�룬��Ӧ�ļ���һ�е����ݡ�
//specΪ�������������������
extern int read_file(char ** const buff, const unsigned int spec, const char * const filename);

//��result�������е�����д���ļ���д�뷽ʽΪ����д��
extern void write_result(const char * const filename);

//�ͷŶ��ļ��Ļ�����
extern void release_buff(char ** const buff, const int valid_item_num);