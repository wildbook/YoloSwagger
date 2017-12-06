using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerInfoDto
    {
        [DataMember(Name = "currentAccountId")]
        ulong CurrentAccountId { get; set; }

        [DataMember(Name = "currentPlatformId")]
        string CurrentPlatformId { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerInfoDto {\n");
            sb.Append("  CurrentAccountId: ").Append(CurrentAccountId).Append("\n");
            sb.Append("  CurrentPlatformId: ").Append(CurrentPlatformId).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}