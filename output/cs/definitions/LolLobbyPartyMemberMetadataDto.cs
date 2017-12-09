using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLobbyPartyMemberMetadataDto
    {
        [DataMember(Name = "positionPref")]
        public string[] PositionPref { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLobbyPartyMemberMetadataDto {\n");
            sb.Append("  PositionPref: ").Append(PositionPref).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}