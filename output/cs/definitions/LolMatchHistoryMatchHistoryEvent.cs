using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryEvent
    {
        [DataMember(Name = "itemId")]
        ushort ItemId { get; set; }

        [DataMember(Name = "type")]
        string Type { get; set; }

        [DataMember(Name = "participantId")]
        ushort ParticipantId { get; set; }

        [DataMember(Name = "killerId")]
        ushort KillerId { get; set; }

        [DataMember(Name = "victimId")]
        ushort VictimId { get; set; }

        [DataMember(Name = "timestamp")]
        ulong Timestamp { get; set; }

        [DataMember(Name = "skillSlot")]
        ushort SkillSlot { get; set; }

        [DataMember(Name = "towerType")]
        string TowerType { get; set; }

        [DataMember(Name = "teamId")]
        ushort TeamId { get; set; }

        [DataMember(Name = "assistingParticipantIds")]
        ushort[] AssistingParticipantIds { get; set; }

        [DataMember(Name = "position")]
        LolMatchHistoryMatchHistoryPosition Position { get; set; }

        [DataMember(Name = "monsterType")]
        string MonsterType { get; set; }

        [DataMember(Name = "monsterSubType")]
        string MonsterSubType { get; set; }

        [DataMember(Name = "buildingType")]
        string BuildingType { get; set; }

        [DataMember(Name = "laneType")]
        string LaneType { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryEvent {\n");
            sb.Append("  ItemId: ").Append(ItemId).Append("\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  ParticipantId: ").Append(ParticipantId).Append("\n");
            sb.Append("  KillerId: ").Append(KillerId).Append("\n");
            sb.Append("  VictimId: ").Append(VictimId).Append("\n");
            sb.Append("  Timestamp: ").Append(Timestamp).Append("\n");
            sb.Append("  SkillSlot: ").Append(SkillSlot).Append("\n");
            sb.Append("  TowerType: ").Append(TowerType).Append("\n");
            sb.Append("  TeamId: ").Append(TeamId).Append("\n");
            sb.Append("  AssistingParticipantIds: ").Append(AssistingParticipantIds).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("  MonsterType: ").Append(MonsterType).Append("\n");
            sb.Append("  MonsterSubType: ").Append(MonsterSubType).Append("\n");
            sb.Append("  BuildingType: ").Append(BuildingType).Append("\n");
            sb.Append("  LaneType: ").Append(LaneType).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}