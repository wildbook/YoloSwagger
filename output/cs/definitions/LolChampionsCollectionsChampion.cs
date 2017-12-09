using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolChampionsCollectionsChampion
    {
        [DataMember(Name = "active")]
        public bool Active { get; set; }

        [DataMember(Name = "alias")]
        public string Alias { get; set; }

        [DataMember(Name = "banVoPath")]
        public string BanVoPath { get; set; }

        [DataMember(Name = "botEnabled")]
        public bool BotEnabled { get; set; }

        [DataMember(Name = "chooseVoPath")]
        public string ChooseVoPath { get; set; }

        [DataMember(Name = "disabledQueues")]
        public string[] DisabledQueues { get; set; }

        [DataMember(Name = "freeToPlay")]
        public bool FreeToPlay { get; set; }

        [DataMember(Name = "id")]
        public int Id { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "ownership")]
        public LolChampionsCollectionsOwnership Ownership { get; set; }

        [DataMember(Name = "passive")]
        public LolChampionsCollectionsChampionSpell Passive { get; set; }

        [DataMember(Name = "purchased")]
        public ulong Purchased { get; set; }

        [DataMember(Name = "rankedPlayEnabled")]
        public bool RankedPlayEnabled { get; set; }

        [DataMember(Name = "roles")]
        public string[] Roles { get; set; }

        [DataMember(Name = "skins")]
        public LolChampionsCollectionsChampionSkin[] Skins { get; set; }

        [DataMember(Name = "spells")]
        public LolChampionsCollectionsChampionSpell[] Spells { get; set; }

        [DataMember(Name = "squarePortraitPath")]
        public string SquarePortraitPath { get; set; }

        [DataMember(Name = "stingerSfxPath")]
        public string StingerSfxPath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolChampionsCollectionsChampion {\n");
            sb.Append("  Active: ").Append(Active).Append("\n");
            sb.Append("  Alias: ").Append(Alias).Append("\n");
            sb.Append("  BanVoPath: ").Append(BanVoPath).Append("\n");
            sb.Append("  BotEnabled: ").Append(BotEnabled).Append("\n");
            sb.Append("  ChooseVoPath: ").Append(ChooseVoPath).Append("\n");
            sb.Append("  DisabledQueues: ").Append(DisabledQueues).Append("\n");
            sb.Append("  FreeToPlay: ").Append(FreeToPlay).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Ownership: ").Append(Ownership).Append("\n");
            sb.Append("  Passive: ").Append(Passive).Append("\n");
            sb.Append("  Purchased: ").Append(Purchased).Append("\n");
            sb.Append("  RankedPlayEnabled: ").Append(RankedPlayEnabled).Append("\n");
            sb.Append("  Roles: ").Append(Roles).Append("\n");
            sb.Append("  Skins: ").Append(Skins).Append("\n");
            sb.Append("  Spells: ").Append(Spells).Append("\n");
            sb.Append("  SquarePortraitPath: ").Append(SquarePortraitPath).Append("\n");
            sb.Append("  StingerSfxPath: ").Append(StingerSfxPath).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}