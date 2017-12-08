using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyLcdsDynamicClientConfig
    {
        [DataMember(Name = "PartyRewards")]
        LolLobbyLcdsPartyRewardsConfig PartyRewards { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyLcdsDynamicClientConfig {\n");
            sb.Append("  PartyRewards: ").Append(PartyRewards).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}