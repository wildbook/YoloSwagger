using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolGameflowQueueGameTypeConfig
    {
        [DataMember(Name = "advancedLearningQuests")]
        bool AdvancedLearningQuests { get; set; }

        [DataMember(Name = "allowTrades")]
        bool AllowTrades { get; set; }

        [DataMember(Name = "banMode")]
        string BanMode { get; set; }

        [DataMember(Name = "banTimerDuration")]
        int BanTimerDuration { get; set; }

        [DataMember(Name = "battleBoost")]
        bool BattleBoost { get; set; }

        [DataMember(Name = "crossTeamChampionPool")]
        bool CrossTeamChampionPool { get; set; }

        [DataMember(Name = "deathMatch")]
        bool DeathMatch { get; set; }

        [DataMember(Name = "doNotRemove")]
        bool DoNotRemove { get; set; }

        [DataMember(Name = "duplicatePick")]
        bool DuplicatePick { get; set; }

        [DataMember(Name = "exclusivePick")]
        bool ExclusivePick { get; set; }

        [DataMember(Name = "id")]
        long Id { get; set; }

        [DataMember(Name = "learningQuests")]
        bool LearningQuests { get; set; }

        [DataMember(Name = "mainPickTimerDuration")]
        int MainPickTimerDuration { get; set; }

        [DataMember(Name = "maxAllowableBans")]
        int MaxAllowableBans { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "onboardCoopBeginner")]
        bool OnboardCoopBeginner { get; set; }

        [DataMember(Name = "pickMode")]
        string PickMode { get; set; }

        [DataMember(Name = "postPickTimerDuration")]
        int PostPickTimerDuration { get; set; }

        [DataMember(Name = "reroll")]
        bool Reroll { get; set; }

        [DataMember(Name = "teamChampionPool")]
        bool TeamChampionPool { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowQueueGameTypeConfig {\n");
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
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  LearningQuests: ").Append(LearningQuests).Append("\n");
            sb.Append("  MainPickTimerDuration: ").Append(MainPickTimerDuration).Append("\n");
            sb.Append("  MaxAllowableBans: ").Append(MaxAllowableBans).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
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