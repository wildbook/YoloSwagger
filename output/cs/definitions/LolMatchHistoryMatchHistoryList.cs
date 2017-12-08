using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryList
    {
        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        [DataMember(Name = "games")]
        LolMatchHistoryMatchHistoryGameList Games { get; set; }

        [DataMember(Name = "accountId")]
        ulong AccountId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryList {\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  Games: ").Append(Games).Append("\n");
            sb.Append("  AccountId: ").Append(AccountId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}