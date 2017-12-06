#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsMastery.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsMasteryPage_t {
    bool current;
    uint32_t id;
    std::vector<LolCollectionsCollectionsMastery_t> masteries;
    std::string name;
    std::map<std::string, uint32_t> summary;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryPage_t& v) {
    j["current"] = v.current;
    j["id"] = v.id;
    j["masteries"] = v.masteries;
    j["name"] = v.name;
    j["summary"] = v.summary;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryPage_t& v) {
    v.current = j.at("current").get<bool>();
    v.id = j.at("id").get<uint32_t>();
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery_t>>();
    v.name = j.at("name").get<std::string>();
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>();
  }
}
