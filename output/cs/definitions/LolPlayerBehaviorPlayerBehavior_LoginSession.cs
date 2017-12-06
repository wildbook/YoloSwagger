using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPlayerBehaviorPlayerBehavior_LoginSession
    {
        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        [DataMember(Name = "error")]
        LolPlayerBehaviorPlayerBehavior_LoginError? Error { get; set; }

        [DataMember(Name = "state")]
        LolPlayerBehaviorPlayerBehavior_LoginSessionState State { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPlayerBehaviorPlayerBehavior_LoginSession {\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("  Error: ").Append(Error).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}