using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct MemberSinceDto
    {
        [DataMember(Name = "playerInfo")]
        PlayerInfoDto PlayerInfo { get; set; }

        [DataMember(Name = "role")]
        string Role { get; set; }

        [DataMember(Name = "since")]
        long Since { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MemberSinceDto {\n");
            sb.Append("  PlayerInfo: ").Append(PlayerInfo).Append("\n");
            sb.Append("  Role: ").Append(Role).Append("\n");
            sb.Append("  Since: ").Append(Since).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}