using System.Runtime.Serialization;
namespace leagueapi {
  enum RiotMessagingServiceState {
    [DataMember(Name = "Connecting")]
    Connecting = 3,

    [DataMember(Name = "Connected")]
    Connected = 5,

    [DataMember(Name = "Disconnected")]
    Disconnected = 1,

    [DataMember(Name = "Disconnecting")]
    Disconnecting = 0,

  }
}