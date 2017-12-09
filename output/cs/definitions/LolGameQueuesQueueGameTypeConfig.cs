using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameQueuesQueueGameTypeConfig
    {
        [DataMember(Name = "advancedLearningQuests")]
        public bool AdvancedLearningQuests { get; set; }

        [DataMember(Name = "allowTrades")]
        public bool AllowTrades { get; set; }

        [DataMember(Name = "banMode")]
        public string BanMode { get; set; }

        [DataMember(Name = "banTimerDuration")]
        public int BanTimerDuration { get; set; }

        [DataMember(Name = "battleBoost")]
        public bool BattleBoost { get; set; }

        [DataMember(Name = "crossTeamChampionPool")]
        public bool CrossTeamChampionPool { get; set; }

        [DataMember(Name = "deathMatch")]
        public bool DeathMatch { get; set; }

        [DataMember(Name = "doNotRemove")]
        public bool DoNotRemove { get; set; }

        [DataMember(Name = "duplicatePick")]
        public bool DuplicatePick { get; set; }

        [DataMember(Name = "exclusivePick")]
        public bool ExclusivePick { get; set; }

        [DataMember(Name = "gameModeOverride")]
        public string GameModeOverride { get; set; }

        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "learningQuests")]
        public bool LearningQuests { get; set; }

        [DataMember(Name = "mainPickTimerDuration")]
        public int MainPickTimerDuration { get; set; }

        [DataMember(Name = "maxAllowableBans")]
        public int MaxAllowableBans { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "numPlayersPerTeamOverride")]
        public int? NumPlayersPerTeamOverride { get; set; }

        [DataMember(Name = "onboardCoopBeginner")]
        public bool OnboardCoopBeginner { get; set; }

        [DataMember(Name = "pickMode")]
        public string PickMode { get; set; }

        [DataMember(Name = "postPickTimerDuration")]
        public int PostPickTimerDuration { get; set; }

        [DataMember(Name = "reroll")]
        public bool Reroll { get; set; }

        [DataMember(Name = "teamChampionPool")]
        public bool TeamChampionPool { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameQueuesQueueGameTypeConfig {\n");
            sb.Append("  AdvancedLearningQuests: ").Append(AdvancedLearningQuests).Append("\n");
            sb.Append("  AllowTrades: ").Append(AllowTrades).Append("\n");
            sb.Append("  BanMode: ").Append(BanMode).Append("\n");
            sb.Append("  BanTimerDuration: ").Append(BanTimerDuration).Append("\n");
            sb.Append("  BattleBoost: ").Append(BattleBoost).Append("\n");
            sb.Append("  CrossTeamChampionPool: ").Append(CrossTeamChampionPool).Append("\n");
            sb.Append("  DeathMatch: ").Append(DeathMatch).Append("\n");
            sb.Append("  DoNotRemove: ").Append(DoNotRemove).Append("\n");
            sb.Append("  DuplicatePick: ").Append(DuplicatePick).Append("\n");
            sb.Append("  ExclusivePick: ").Append(ExclusivePick).Append("\n");
            sb.Append("  GameModeOverride: ").Append(GameModeOverride).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LearningQuests: ").Append(LearningQuests).Append("\n");
            sb.Append("  MainPickTimerDuration: ").Append(MainPickTimerDuration).Append("\n");
            sb.Append("  MaxAllowableBans: ").Append(MaxAllowableBans).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  NumPlayersPerTeamOverride: ").Append(NumPlayersPerTeamOverride).Append("\n");
            sb.Append("  OnboardCoopBeginner: ").Append(OnboardCoopBeginner).Append("\n");
            sb.Append("  PickMode: ").Append(PickMode).Append("\n");
            sb.Append("  PostPickTimerDuration: ").Append(PostPickTimerDuration).Append("\n");
            sb.Append("  Reroll: ").Append(Reroll).Append("\n");
            sb.Append("  TeamChampionPool: ").Append(TeamChampionPool).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}