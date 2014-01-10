/*
 * MPTCPList.h
 *
 *  Created on: Jan 8, 2014
 *      Author: Benjamin Hesmans
 */

#ifndef MPTCPLIST_H_
#define MPTCPLIST_H_

int sublfowsEqual(mptcp_sf* s1,  mptcp_sf* s2);
int sublfowsEqualWrapper(void* s1, int pos, void* s2, void* acc);
int searchMPTCPConnection(void* mc, int pos, void* searchFun, void *acc);

mptcp_sf* getSubflowFromIPTCP(List *l,struct sniff_ip *ip, struct sniff_tcp *tcp, int *way);
mptcp_sf* getSubflow(List *l,mptcp_sf *msf);
void add_MPTCP_conn_syn(List* l, struct sniff_ip *ip, struct sniff_tcp *tcp);
void add_MPTCP_conn_synack(List* l, struct sniff_ip *ip, struct sniff_tcp *tcp);
void updateListCapable(List* l, struct sniff_ip *ip, struct sniff_tcp *tcp);
int checkSynAckJoin(mptcp_sf *msf);
void add_MPTCP_join_synack(List* l, struct sniff_ip *ip, struct sniff_tcp *tcp);
int compareHash(void* element, int pos, void* arg, void *acc);
mptcp_conn* getConnectionFromHash(List* l,u_char* hash);

void add_MPTCP_join_syn(List* l, struct sniff_ip *ip, struct sniff_tcp *tcp);
void updateListJoin(List* l,  struct sniff_ip *ip, struct sniff_tcp *tcp);
void printMPTCPSublflow(void* element, int pos, void* fix, void* acc);
void printMPTCPConnections(void* element, int pos, void* fix, void* acc);
void printAllConnections(List *l);
void destroyModules(void* element, int pos, void* fix, void* acc);

int compareMap(void *e1, void *e2);

#endif /* MPTCPLIST_H_ */
