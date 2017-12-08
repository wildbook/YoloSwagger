using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolCollectionsCollectionsMasteryPage
    {
        [DataMember(Name = "current")]
        bool Current { get; set; }

        [DataMember(Name = "masteries")]
        LolCollectionsCollectionsMastery[] Masteries { get; set; }

        [DataMember(Name = "summary")]
        Dictionary<string, uint> Summary { get; set; }

        [DataMember(Name = "id")]
        uint Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsMasteryPage {\n");
            sb.Append("  Current: ").Append(Current).Append("\n");
            sb.Append("  Masteries: ").Append(Masteries).Append("\n");
            sb.Append("  Summary: ").Append(Summary).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}