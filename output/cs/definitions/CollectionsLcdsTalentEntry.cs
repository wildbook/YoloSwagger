using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CollectionsLcdsTalentEntry
    {
        [DataMember(Name = "rank")]
        public int Rank { get; set; }

        [DataMember(Name = "talentId")]
        public int TalentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsTalentEntry {\n");
            sb.Append("  Rank: ").Append(Rank).Append("\n");
            sb.Append("  TalentId: ").Append(TalentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}