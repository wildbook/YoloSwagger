using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LcdsInviteFailed
    {
        [DataMember(Name = "exception")]
        public LcdsGameInviteBaseRuntimeException Exception { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerName")]
        public string SummonerName { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LcdsInviteFailed {\n");
            sb.Append("  Exception: ").Append(Exception).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerName: ").Append(SummonerName).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}