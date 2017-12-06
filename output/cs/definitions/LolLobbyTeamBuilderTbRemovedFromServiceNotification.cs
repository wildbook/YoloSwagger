using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderTbRemovedFromServiceNotification
    {
        [DataMember(Name = "backwardsTransitionInfo")]
        LolLobbyTeamBuilderBackwardsTransitionInfoV1 BackwardsTransitionInfo { get; set; }

        [DataMember(Name = "reason")]
        string Reason { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderTbRemovedFromServiceNotification {\n");
            sb.Append("  BackwardsTransitionInfo: ").Append(BackwardsTransitionInfo).Append("\n");
            sb.Append("  Reason: ").Append(Reason).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}