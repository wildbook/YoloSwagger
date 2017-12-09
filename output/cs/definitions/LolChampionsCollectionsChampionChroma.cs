using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsCollectionsChampionChroma
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "chromaPath")]
        public string ChromaPath { get; set; }

        [DataMember(Name = "colors")]
        public string[] Colors { get; set; }

        [DataMember(Name = "disabled")]
        public bool Disabled { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "lastSelected")]
        public bool LastSelected { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "ownership")]
        public LolChampionsCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "stillObtainable")]
        public bool StillObtainable { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsCollectionsChampionChroma {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  ChromaPath: ").Append(ChromaPath).Append("\n");
            sb.Append("  Colors: ").Append(Colors).Append("\n");
            sb.Append("  Disabled: ").Append(Disabled).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LastSelected: ").Append(LastSelected).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("  StillObtainable: ").Append(StillObtainable).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}