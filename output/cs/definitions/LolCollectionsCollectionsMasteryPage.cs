using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolCollectionsCollectionsMasteryPage
    {
        [DataMember(Name = "current")]
        public bool Current { get; set; }

        [DataMember(Name = "id")]
        public uint Id { get; set; }

        [DataMember(Name = "masteries")]
        public LolCollectionsCollectionsMastery[] Masteries { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "summary")]
        public Dictionary<string, uint> Summary { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolCollectionsCollectionsMasteryPage {\n");
            sb.Append("  Current: ").Append(Current).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Masteries: ").Append(Masteries).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Summary: ").Append(Summary).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}