using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct GameflowLcdsPlayerCredentialsDto
    {
        [DataMember(Name = "encryptionKey")]
        public string EncryptionKey { get; set; }

        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "observer")]
        public bool Observer { get; set; }

        [DataMember(Name = "observerEncryptionKey")]
        public string ObserverEncryptionKey { get; set; }

        [DataMember(Name = "observerServerIp")]
        public string ObserverServerIp { get; set; }

        [DataMember(Name = "observerServerPort")]
        public ushort ObserverServerPort { get; set; }

        [DataMember(Name = "serverIp")]
        public string ServerIp { get; set; }

        [DataMember(Name = "serverPort")]
        public ushort ServerPort { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GameflowLcdsPlayerCredentialsDto {\n");
            sb.Append("  EncryptionKey: ").Append(EncryptionKey).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  Observer: ").Append(Observer).Append("\n");
            sb.Append("  ObserverEncryptionKey: ").Append(ObserverEncryptionKey).Append("\n");
            sb.Append("  ObserverServerIp: ").Append(ObserverServerIp).Append("\n");
            sb.Append("  ObserverServerPort: ").Append(ObserverServerPort).Append("\n");
            sb.Append("  ServerIp: ").Append(ServerIp).Append("\n");
            sb.Append("  ServerPort: ").Append(ServerPort).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}