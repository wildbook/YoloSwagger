#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryTimeline_t {
    uint16_t participantId;
    std::string role;
    std::map<std::string, double> csDiffPerMinDeltas;
    std::map<std::string, double> xpPerMinDeltas;
    std::map<std::string, double> goldPerMinDeltas;
    std::map<std::string, double> creepsPerMinDeltas;
    std::map<std::string, double> damageTakenDiffPerMinDeltas;
    std::map<std::string, double> xpDiffPerMinDeltas;
    std::map<std::string, double> damageTakenPerMinDeltas;
    std::string lane;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryTimeline_t& v) {
    j["participantId"] = v.participantId;
    j["role"] = v.role;
    j["csDiffPerMinDeltas"] = v.csDiffPerMinDeltas;
    j["xpPerMinDeltas"] = v.xpPerMinDeltas;
    j["goldPerMinDeltas"] = v.goldPerMinDeltas;
    j["creepsPerMinDeltas"] = v.creepsPerMinDeltas;
    j["damageTakenDiffPerMinDeltas"] = v.damageTakenDiffPerMinDeltas;
    j["xpDiffPerMinDeltas"] = v.xpDiffPerMinDeltas;
    j["damageTakenPerMinDeltas"] = v.damageTakenPerMinDeltas;
    j["lane"] = v.lane;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryTimeline_t& v) {
    v.participantId = j.at("participantId").get<uint16_t>();
    v.role = j.at("role").get<std::string>();
    v.csDiffPerMinDeltas = j.at("csDiffPerMinDeltas").get<std::map<std::string, double>>();
    v.xpPerMinDeltas = j.at("xpPerMinDeltas").get<std::map<std::string, double>>();
    v.goldPerMinDeltas = j.at("goldPerMinDeltas").get<std::map<std::string, double>>();
    v.creepsPerMinDeltas = j.at("creepsPerMinDeltas").get<std::map<std::string, double>>();
    v.damageTakenDiffPerMinDeltas = j.at("damageTakenDiffPerMinDeltas").get<std::map<std::string, double>>();
    v.xpDiffPerMinDeltas = j.at("xpDiffPerMinDeltas").get<std::map<std::string, double>>();
    v.damageTakenPerMinDeltas = j.at("damageTakenPerMinDeltas").get<std::map<std::string, double>>();
    v.lane = j.at("lane").get<std::string>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryTimeline_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
