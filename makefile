m_access-4c: m_access-4.c
	gcc -Wall -o m_access-4 m_access-4.c -lpigpio -lrt
	chmod +x m_access-4