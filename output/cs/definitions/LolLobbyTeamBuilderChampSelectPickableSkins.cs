using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLobbyTeamBuilderChampSelectPickableSkins
    {
        [DataMember(Name = "skinIds")]
        int[] SkinIds { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyTeamBuilderChampSelectPickableSkins {\n");
            sb.Append("  SkinIds: ").Append(SkinIds).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}