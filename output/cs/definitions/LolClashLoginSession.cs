using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashLoginSession
    {
        [DataMember(Name = "state")]
        public LolClashLoginSessionState State { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong? SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashLoginSession {\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}