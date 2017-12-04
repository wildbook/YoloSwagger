using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct GameflowLcdsPlayerCredentialsDto {
    [DataMember(Name = "gameId")]
    ulong GameId {get; set;}

    [DataMember(Name = "observer")]
    bool Observer {get; set;}

    [DataMember(Name = "observerServerPort")]
    ushort ObserverServerPort {get; set;}

    [DataMember(Name = "observerServerIp")]
    string ObserverServerIp {get; set;}

    [DataMember(Name = "serverIp")]
    string ServerIp {get; set;}

    [DataMember(Name = "summonerId")]
    ulong SummonerId {get; set;}

    [DataMember(Name = "serverPort")]
    ushort ServerPort {get; set;}

    [DataMember(Name = "encryptionKey")]
    string EncryptionKey {get; set;}

    [DataMember(Name = "observerEncryptionKey")]
    string ObserverEncryptionKey {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class GameflowLcdsPlayerCredentialsDto {\n");
      sb.Append("  GameId: ").Append(GameId).Append("\n");
      sb.Append("  Observer: ").Append(Observer).Append("\n");
      sb.Append("  ObserverServerPort: ").Append(ObserverServerPort).Append("\n");
      sb.Append("  ObserverServerIp: ").Append(ObserverServerIp).Append("\n");
      sb.Append("  ServerIp: ").Append(ServerIp).Append("\n");
      sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
      sb.Append("  ServerPort: ").Append(ServerPort).Append("\n");
      sb.Append("  EncryptionKey: ").Append(EncryptionKey).Append("\n");
      sb.Append("  ObserverEncryptionKey: ").Append(ObserverEncryptionKey).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}