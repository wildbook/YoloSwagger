using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LcdsStartChampSelectDto
    {
        [DataMember(Name = "invalidPlayers")]
        public LcdsFailedJoinPlayer[] InvalidPlayers { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsStartChampSelectDto {\n");
            sb.Append("  InvalidPlayers: ").Append(InvalidPlayers).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}