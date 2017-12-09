using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PlayerLootResultDTO
    {
        [DataMember(Name = "added")]
        public PlayerLootDTO[] Added { get; set; }

        [DataMember(Name = "details")]
        public string Details { get; set; }

        [DataMember(Name = "redeemed")]
        public string[] Redeemed { get; set; }

        [DataMember(Name = "removed")]
        public PlayerLootDTO[] Removed { get; set; }

        [DataMember(Name = "status")]
        public string Status { get; set; }

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