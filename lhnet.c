#include "lhnet.h" // Ensure this matches your actual header filename

// Define the global list declared extern in the header
lhnetsocket_t lhnet_socketlist;

int LHNETADDRESS_FromPort(lhnetaddress_t *address, lhnetaddresstype_t addresstype, int port)
{
    (void)address;
    (void)addresstype;
    (void)port;
    return 0;
}

int LHNETADDRESS_FromString(lhnetaddress_t *address, const char *string, int defaultport)
{
    (void)address;
    (void)string;
    (void)defaultport;
    return 0;
}

int LHNETADDRESS_ToString(const lhnetaddress_t *address, char *string, int stringbuffersize, int includeport)
{
    (void)address;
    (void)string;
    (void)stringbuffersize;
    (void)includeport;
    return 0;
}

const char *LHNETADDRESS_GetInterfaceName(const lhnetaddress_t *address, char *ifname, size_t ifnamelength)
{
    (void)address;
    (void)ifname;
    (void)ifnamelength;
    return NULL;
}

int LHNETADDRESS_GetPort(const lhnetaddress_t *address)
{
    (void)address;
    return 0;
}

int LHNETADDRESS_SetPort(lhnetaddress_t *address, int port)
{
    (void)address;
    (void)port;
    return 0;
}

int LHNETADDRESS_Compare(const lhnetaddress_t *address1, const lhnetaddress_t *address2)
{
    (void)address1;
    (void)address2;
    return 0;
}

void LHNET_Init(void)
{
    // No-op
}

void LHNET_Shutdown(void)
{
    // No-op
}

int LHNET_DefaultDSCP(int dscp)
{
    (void)dscp;
    return 0;
}

void LHNET_SleepUntilPacket_Microseconds(int microseconds)
{
    (void)microseconds;
}

lhnetsocket_t *LHNET_OpenSocket_Connectionless(lhnetaddress_t *address)
{
    (void)address;
    return NULL;
}

void LHNET_CloseSocket(lhnetsocket_t *lhnetsocket)
{
    (void)lhnetsocket;
}

lhnetaddress_t *LHNET_AddressFromSocket(lhnetsocket_t *sock)
{
    (void)sock;
    return NULL;
}

int LHNET_Read(lhnetsocket_t *lhnetsocket, void *content, int maxcontentlength, lhnetaddress_t *address)
{
    (void)lhnetsocket;
    (void)content;
    (void)maxcontentlength;
    (void)address;
    return 0;
}

int LHNET_Write(lhnetsocket_t *lhnetsocket, const void *content, int contentlength, const lhnetaddress_t *address)
{
    (void)lhnetsocket;
    (void)content;
    (void)contentlength;
    (void)address;
    return 0;
}
