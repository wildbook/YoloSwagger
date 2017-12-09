using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolFeaturedModesLoginSession
    {
        [DataMember(Name = "accountId")]
        public ulong AccountId { get; set; }

        [DataMember(Name = "state")]
        public LolFeaturedModesLoginSessionStates State { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolFeaturedModesLoginSession {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}