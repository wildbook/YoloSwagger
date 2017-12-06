#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsMastery.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsMasteryPage_t {
    bool current;
    std::vector<LolCollectionsCollectionsMastery_t> masteries;
    std::string name;
    uint32_t id;
    std::map<std::string, uint32_t> summary;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryPage_t& v) {
    j["current"] = v.current;
    j["masteries"] = v.masteries;
    j["name"] = v.name;
    j["id"] = v.id;
    j["summary"] = v.summary;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryPage_t& v) {
    v.current = j.at("current").get<bool>();
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery_t>>();
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint32_t>();
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>();
  }
}
