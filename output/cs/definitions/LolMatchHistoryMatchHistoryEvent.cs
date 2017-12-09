using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMatchHistoryMatchHistoryEvent
    {
        [DataMember(Name = "assistingParticipantIds")]
        public ushort[] AssistingParticipantIds { get; set; }

        [DataMember(Name = "buildingType")]
        public string BuildingType { get; set; }

        [DataMember(Name = "itemId")]
        public ushort ItemId { get; set; }

        [DataMember(Name = "killerId")]
        public ushort KillerId { get; set; }

        [DataMember(Name = "laneType")]
        public string LaneType { get; set; }

        [DataMember(Name = "monsterSubType")]
        public string MonsterSubType { get; set; }

        [DataMember(Name = "monsterType")]
        public string MonsterType { get; set; }

        [DataMember(Name = "participantId")]
        public ushort ParticipantId { get; set; }

        [DataMember(Name = "position")]
        public LolMatchHistoryMatchHistoryPosition Position { get; set; }

        [DataMember(Name = "skillSlot")]
        public ushort SkillSlot { get; set; }

        [DataMember(Name = "teamId")]
        public ushort TeamId { get; set; }

        [DataMember(Name = "timestamp")]
        public ulong Timestamp { get; set; }

        [DataMember(Name = "towerType")]
        public string TowerType { get; set; }

        [DataMember(Name = "type")]
        public string Type { get; set; }

        [DataMember(Name = "victimId")]
        public ushort VictimId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryEvent {\n");
            sb.Append("  AssistingParticipantIds: ").Append(AssistingParticipantIds).Append("\n");
            sb.Append("  BuildingType: ").Append(BuildingType).Append("\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  KillerId: ").Append(KillerId).Append("\n");
            sb.Append("  LaneType: ").Append(LaneType).Append("\n");
            sb.Append("  MonsterSubType: ").Append(MonsterSubType).Append("\n");
            sb.Append("  MonsterType: ").Append(MonsterType).Append("\n");
            sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("  SkillSlot: ").Append(SkillSlot).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  TowerType: ").Append(TowerType).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  VictimId: ").Append(VictimId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}