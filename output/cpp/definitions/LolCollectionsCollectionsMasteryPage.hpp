#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsMastery.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsMasteryPage_t {
    uint32_t id;
    std::map<std::string, uint32_t> summary;
    std::string name;
    bool current;
    std::vector<LolCollectionsCollectionsMastery_t> masteries;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryPage_t& v) {
    j["id"] = v.id;
    j["summary"] = v.summary;
    j["name"] = v.name;
    j["current"] = v.current;
    j["masteries"] = v.masteries;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryPage_t& v) {
    v.id = j.at("id").get<uint32_t>();
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>();
    v.name = j.at("name").get<std::string>();
    v.current = j.at("current").get<bool>();
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery_t>>();
  }
  inline std::string to_string(const LolCollectionsCollectionsMasteryPage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
