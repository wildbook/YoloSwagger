using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsCollectionsChampionSkin
    {
        [DataMember(Name = "cardPath")]
        public string CardPath { get; set; }

        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "chromaPath")]
        public string ChromaPath { get; set; }

        [DataMember(Name = "chromas")]
        public LolChampionsCollectionsChampionChroma[] Chromas { get; set; }

        [DataMember(Name = "disabled")]
        public bool Disabled { get; set; }

        [DataMember(Name = "emblems")]
        public LolChampionsCollectionsChampionSkinEmblem[] Emblems { get; set; }

        [DataMember(Name = "featuresText")]
        public string FeaturesText { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "isBase")]
        public bool IsBase { get; set; }

        [DataMember(Name = "lastSelected")]
        public bool LastSelected { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "ownership")]
        public LolChampionsCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "rarityGemPath")]
        public string RarityGemPath { get; set; }

        [DataMember(Name = "skinType")]
        public string SkinType { get; set; }

        [DataMember(Name = "splashPath")]
        public string SplashPath { get; set; }

        [DataMember(Name = "splashVideoPath")]
        public string SplashVideoPath { get; set; }

        [DataMember(Name = "stillObtainable")]
        public bool StillObtainable { get; set; }

        [DataMember(Name = "tilePath")]
        public string TilePath { get; set; }

        [DataMember(Name = "uncenteredSplashPath")]
        public string UncenteredSplashPath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsCollectionsChampionSkin {\n");
            sb.Append("  CardPath: ").Append(CardPath).Append("\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  ChromaPath: ").Append(ChromaPath).Append("\n");
            sb.Append("  Chromas: ").Append(Chromas).Append("\n");
            sb.Append("  Disabled: ").Append(Disabled).Append("\n");
            sb.Append("  Emblems: ").Append(Emblems).Append("\n");
            sb.Append("  FeaturesText: ").Append(FeaturesText).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IsBase: ").Append(IsBase).Append("\n");
            sb.Append("  LastSelected: ").Append(LastSelected).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("  RarityGemPath: ").Append(RarityGemPath).Append("\n");
            sb.Append("  SkinType: ").Append(SkinType).Append("\n");
            sb.Append("  SplashPath: ").Append(SplashPath).Append("\n");
            sb.Append("  SplashVideoPath: ").Append(SplashVideoPath).Append("\n");
            sb.Append("  StillObtainable: ").Append(StillObtainable).Append("\n");
            sb.Append("  TilePath: ").Append(TilePath).Append("\n");
            sb.Append("  UncenteredSplashPath: ").Append(UncenteredSplashPath).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}