using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ClashRewardSpec
    {
        [DataMember(Name = "bracket")]
        public string Bracket { get; set; }

        [DataMember(Name = "cup")]
        public string Cup { get; set; }

        [DataMember(Name = "gem")]
        public string Gem { get; set; }

        [DataMember(Name = "level")]
        public string Level { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "pedestal")]
        public string Pedestal { get; set; }

        [DataMember(Name = "quantity")]
        public string Quantity { get; set; }

        [DataMember(Name = "seasonId")]
        public string SeasonId { get; set; }

        [DataMember(Name = "theme")]
        public string Theme { get; set; }

        [DataMember(Name = "tier")]
        public string Tier { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClashRewardSpec {\n");
            sb.Append("  Bracket: ").Append(Bracket).Append("\n");
            sb.Append("  Cup: ").Append(Cup).Append("\n");
            sb.Append("  Gem: ").Append(Gem).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Pedestal: ").Append(Pedestal).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("  SeasonId: ").Append(SeasonId).Append("\n");
            sb.Append("  Theme: ").Append(Theme).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}