using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct CollectionsLcdsTalentEntry
    {
        [DataMember(Name = "talentId")]
        int TalentId { get; set; }

        [DataMember(Name = "rank")]
        int Rank { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsTalentEntry {\n");
            sb.Append("  TalentId: ").Append(TalentId).Append("\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}