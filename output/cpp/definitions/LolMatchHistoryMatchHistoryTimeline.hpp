#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimeline_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimeline_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolMatchHistoryMatchHistoryTimeline {
    // 
    std::string lane;
    // 
    uint16_t participantId;
    // 
    std::map<std::string, double> csDiffPerMinDeltas;
    // 
    std::map<std::string, double> goldPerMinDeltas;
    // 
    std::map<std::string, double> xpDiffPerMinDeltas;
    // 
    std::map<std::string, double> creepsPerMinDeltas;
    // 
    std::map<std::string, double> xpPerMinDeltas;
    // 
    std::string role;
    // 
    std::map<std::string, double> damageTakenDiffPerMinDeltas;
    // 
    std::map<std::string, double> damageTakenPerMinDeltas;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimeline& v) {
    j["lane"] = v.lane;
    j["participantId"] = v.participantId;
    j["csDiffPerMinDeltas"] = v.csDiffPerMinDeltas;
    j["goldPerMinDeltas"] = v.goldPerMinDeltas;
    j["xpDiffPerMinDeltas"] = v.xpDiffPerMinDeltas;
    j["creepsPerMinDeltas"] = v.creepsPerMinDeltas;
    j["xpPerMinDeltas"] = v.xpPerMinDeltas;
    j["role"] = v.role;
    j["damageTakenDiffPerMinDeltas"] = v.damageTakenDiffPerMinDeltas;
    j["damageTakenPerMinDeltas"] = v.damageTakenPerMinDeltas;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimeline& v) {
    v.lane = j.at("lane").get<std::string>;
    v.participantId = j.at("participantId").get<uint16_t>;
    v.csDiffPerMinDeltas = j.at("csDiffPerMinDeltas").get<std::map<std::string, double>>;
    v.goldPerMinDeltas = j.at("goldPerMinDeltas").get<std::map<std::string, double>>;
    v.xpDiffPerMinDeltas = j.at("xpDiffPerMinDeltas").get<std::map<std::string, double>>;
    v.creepsPerMinDeltas = j.at("creepsPerMinDeltas").get<std::map<std::string, double>>;
    v.xpPerMinDeltas = j.at("xpPerMinDeltas").get<std::map<std::string, double>>;
    v.role = j.at("role").get<std::string>;
    v.damageTakenDiffPerMinDeltas = j.at("damageTakenDiffPerMinDeltas").get<std::map<std::string, double>>;
    v.damageTakenPerMinDeltas = j.at("damageTakenPerMinDeltas").get<std::map<std::string, double>>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryTimeline_HPP
