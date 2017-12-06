using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolChampionsCollectionsChampionChroma
    {
        [DataMember(Name = "championId")]
        int ChampionId { get; set; }

        [DataMember(Name = "chromaPath")]
        string ChromaPath { get; set; }

        [DataMember(Name = "colors")]
        string[] Colors { get; set; }

        [DataMember(Name = "disabled")]
        bool Disabled { get; set; }

        [DataMember(Name = "id")]
        int Id { get; set; }

        [DataMember(Name = "lastSelected")]
        bool LastSelected { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "ownership")]
        LolChampionsCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "stillObtainable")]
        bool StillObtainable { get; set; }

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