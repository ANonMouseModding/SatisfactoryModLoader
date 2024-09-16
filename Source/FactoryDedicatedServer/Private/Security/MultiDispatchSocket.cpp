// This file has been automatically generated by the Unreal Header Implementation tool

#include "Security/MultiDispatchSocket.h"

FMultiDispatchSocket::FMultiDispatchSocket(const FString& InSocketDescription){ }
FMultiDispatchSocket::~FMultiDispatchSocket(){ }
void FMultiDispatchSocket::AddUnderlyingSocket(FUniqueSocket&& NewSocket, const TSharedRef<FInternetAddr>& BindAddress){ }
bool FMultiDispatchSocket::Shutdown(ESocketShutdownMode Mode){ return bool(); }
bool FMultiDispatchSocket::Close(){ return bool(); }
bool FMultiDispatchSocket::Bind(const FInternetAddr& Addr){ return bool(); }
bool FMultiDispatchSocket::Connect(const FInternetAddr& Addr){ return bool(); }
bool FMultiDispatchSocket::Listen(int32 MaxBacklog){ return bool(); }
bool FMultiDispatchSocket::WaitForPendingConnection(bool& bHasPendingConnection, const FTimespan& WaitTime){ return bool(); }
bool FMultiDispatchSocket::HasPendingData(uint32& PendingDataSize){ return bool(); }
FSocket* FMultiDispatchSocket::Accept(const FString& InSocketDescription){ return nullptr; }
FSocket* FMultiDispatchSocket::Accept(FInternetAddr& OutAddr, const FString& InSocketDescription){ return nullptr; }
bool FMultiDispatchSocket::SendTo(const uint8* Data, int32 Count, int32& BytesSent, const FInternetAddr& Destination){ return bool(); }
bool FMultiDispatchSocket::Send(const uint8* Data, int32 Count, int32& BytesSent){ return bool(); }
bool FMultiDispatchSocket::RecvFrom(uint8* Data, int32 BufferSize, int32& BytesRead, FInternetAddr& Source, ESocketReceiveFlags::Type Flags){ return bool(); }
bool FMultiDispatchSocket::Recv(uint8* Data,int32 BufferSize,int32& BytesRead, ESocketReceiveFlags::Type Flags){ return bool(); }
bool FMultiDispatchSocket::Wait(ESocketWaitConditions::Type Condition, FTimespan WaitTime){ return bool(); }
ESocketConnectionState FMultiDispatchSocket::GetConnectionState(){ return ESocketConnectionState(); }
void FMultiDispatchSocket::GetAddress(FInternetAddr& OutAddr){ }
bool FMultiDispatchSocket::GetPeerAddress(FInternetAddr& OutAddr){ return bool(); }
bool FMultiDispatchSocket::SetNonBlocking(bool bIsNonBlocking){ return bool(); }
bool FMultiDispatchSocket::SetNoDelay(bool bIsNoDelay){ return bool(); }
bool FMultiDispatchSocket::SetBroadcast(bool bAllowBroadcast){ return bool(); }
bool FMultiDispatchSocket::JoinMulticastGroup(const FInternetAddr& GroupAddress){ return bool(); }
bool FMultiDispatchSocket::JoinMulticastGroup(const FInternetAddr& GroupAddress, const FInternetAddr& InterfaceAddress){ return bool(); }
bool FMultiDispatchSocket::LeaveMulticastGroup(const FInternetAddr& GroupAddress){ return bool(); }
bool FMultiDispatchSocket::LeaveMulticastGroup(const FInternetAddr& GroupAddress, const FInternetAddr& InterfaceAddress){ return bool(); }
bool FMultiDispatchSocket::SetMulticastLoopback(bool bLoopback){ return bool(); }
bool FMultiDispatchSocket::SetMulticastTtl(uint8 TimeToLive){ return bool(); }
bool FMultiDispatchSocket::SetMulticastInterface(const FInternetAddr& InterfaceAddress){ return bool(); }
bool FMultiDispatchSocket::SetReuseAddr(bool bAllowReuse){ return bool(); }
bool FMultiDispatchSocket::SetLinger(bool bShouldLinger , int32 Timeout){ return bool(); }
bool FMultiDispatchSocket::SetRecvErr(bool bUseErrorQueue){ return bool(); }
bool FMultiDispatchSocket::SetSendBufferSize(int32 Size,int32& NewSize){ return bool(); }
bool FMultiDispatchSocket::SetReceiveBufferSize(int32 Size,int32& NewSize){ return bool(); }
int32 FMultiDispatchSocket::GetPortNo(){ return int32(); }
bool FMultiDispatchSocket::SetIpPktInfo(bool bEnable){ return bool(); }
bool FMultiDispatchSocket::RecvFromWithPktInfo(uint8* Data, int32 BufferSize, int32& BytesRead, FInternetAddr& Source, FInternetAddr& Destination, ESocketReceiveFlags::Type Flags){ return bool(); }