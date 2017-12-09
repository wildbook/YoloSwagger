#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsMastery.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsMasteryPage_t {
    std::string name;
    uint32_t id;
    std::vector<LolCollectionsCollectionsMastery_t> masteries;
    bool current;
    std::map<std::string, uint32_t> summary;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryPage_t& v) {
    j["name"] = v.name;
    j["id"] = v.id;
    j["masteries"] = v.masteries;
    j["current"] = v.current;
    j["summary"] = v.summary;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryPage_t& v) {
    v.name = j.at("name").get<std::string>();
    v.id = j.at("id").get<uint32_t>();
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery_t>>();
    v.current = j.at("current").get<bool>();
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>();
  }
  inline std::string to_string(const LolCollectionsCollectionsMasteryPage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
