using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectLcdsObfuscatedParticipant
    {
        [DataMember(Name = "gameUniqueId")]
        public ulong GameUniqueId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsObfuscatedParticipant {\n");
            sb.Append("  GameUniqueId: ").Append(GameUniqueId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}