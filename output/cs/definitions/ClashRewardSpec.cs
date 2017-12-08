using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ClashRewardSpec
    {
        [DataMember(Name = "seasonId")]
        string SeasonId { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "level")]
        string Level { get; set; }

        [DataMember(Name = "cup")]
        string Cup { get; set; }

        [DataMember(Name = "theme")]
        string Theme { get; set; }

        [DataMember(Name = "bracket")]
        string Bracket { get; set; }

        [DataMember(Name = "tier")]
        string Tier { get; set; }

        [DataMember(Name = "pedestal")]
        string Pedestal { get; set; }

        [DataMember(Name = "gem")]
        string Gem { get; set; }

        [DataMember(Name = "quantity")]
        string Quantity { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ClashRewardSpec {\n");
            sb.Append("  SeasonId: ").Append(SeasonId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Level: ").Append(Level).Append("\n");
            sb.Append("  Cup: ").Append(Cup).Append("\n");
            sb.Append("  Theme: ").Append(Theme).Append("\n");
            sb.Append("  Bracket: ").Append(Bracket).Append("\n");
            sb.Append("  Tier: ").Append(Tier).Append("\n");
            sb.Append("  Pedestal: ").Append(Pedestal).Append("\n");
            sb.Append("  Gem: ").Append(Gem).Append("\n");
            sb.Append("  Quantity: ").Append(Quantity).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}