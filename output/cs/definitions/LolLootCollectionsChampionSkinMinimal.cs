using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLootCollectionsChampionSkinMinimal
    {
        [DataMember(Name = "championId")]
        public int ChampionId { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "ownership")]
        public LolLootCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "splashPath")]
        public string SplashPath { get; set; }

        [DataMember(Name = "tilePath")]
        public string TilePath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLootCollectionsChampionSkinMinimal {\n");
            sb.Append("  ChampionId: ").Append(ChampionId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("  SplashPath: ").Append(SplashPath).Append("\n");
            sb.Append("  TilePath: ").Append(TilePath).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}