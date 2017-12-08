#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimeline_t {
    std::string lane;
    std::map<std::string, double> xpPerMinDeltas;
    std::map<std::string, double> creepsPerMinDeltas;
    std::map<std::string, double> damageTakenPerMinDeltas;
    std::string role;
    std::map<std::string, double> damageTakenDiffPerMinDeltas;
    uint16_t participantId;
    std::map<std::string, double> xpDiffPerMinDeltas;
    std::map<std::string, double> goldPerMinDeltas;
    std::map<std::string, double> csDiffPerMinDeltas;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimeline_t& v) {
    j["lane"] = v.lane;
    j["xpPerMinDeltas"] = v.xpPerMinDeltas;
    j["creepsPerMinDeltas"] = v.creepsPerMinDeltas;
    j["damageTakenPerMinDeltas"] = v.damageTakenPerMinDeltas;
    j["role"] = v.role;
    j["damageTakenDiffPerMinDeltas"] = v.damageTakenDiffPerMinDeltas;
    j["participantId"] = v.participantId;
    j["xpDiffPerMinDeltas"] = v.xpDiffPerMinDeltas;
    j["goldPerMinDeltas"] = v.goldPerMinDeltas;
    j["csDiffPerMinDeltas"] = v.csDiffPerMinDeltas;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimeline_t& v) {
    v.lane = j.at("lane").get<std::string>();
    v.xpPerMinDeltas = j.at("xpPerMinDeltas").get<std::map<std::string, double>>();
    v.creepsPerMinDeltas = j.at("creepsPerMinDeltas").get<std::map<std::string, double>>();
    v.damageTakenPerMinDeltas = j.at("damageTakenPerMinDeltas").get<std::map<std::string, double>>();
    v.role = j.at("role").get<std::string>();
    v.damageTakenDiffPerMinDeltas = j.at("damageTakenDiffPerMinDeltas").get<std::map<std::string, double>>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.xpDiffPerMinDeltas = j.at("xpDiffPerMinDeltas").get<std::map<std::string, double>>();
    v.goldPerMinDeltas = j.at("goldPerMinDeltas").get<std::map<std::string, double>>();
    v.csDiffPerMinDeltas = j.at("csDiffPerMinDeltas").get<std::map<std::string, double>>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTimeline_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
