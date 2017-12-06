using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlayerLootResultDTO
    {
        [DataMember(Name = "added")]
        PlayerLootDTO[] Added { get; set; }

        [DataMember(Name = "details")]
        string Details { get; set; }

        [DataMember(Name = "redeemed")]
        string[] Redeemed { get; set; }

        [DataMember(Name = "removed")]
        PlayerLootDTO[] Removed { get; set; }

        [DataMember(Name = "status")]
        string Status { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlayerLootResultDTO {\n");
            sb.Append("  Added: ").Append(Added).Append("\n");
            sb.Append("  Details: ").Append(Details).Append("\n");
            sb.Append("  Redeemed: ").Append(Redeemed).Append("\n");
            sb.Append("  Removed: ").Append(Removed).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}