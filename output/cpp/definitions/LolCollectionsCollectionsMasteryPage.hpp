#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsMastery.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsMasteryPage_t {
    std::string name;
    std::map<std::string, uint32_t> summary;
    bool current;
    std::vector<LolCollectionsCollectionsMastery_t> masteries;
    uint32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsMasteryPage_t& v) {
    j["name"] = v.name;
    j["summary"] = v.summary;
    j["current"] = v.current;
    j["masteries"] = v.masteries;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsMasteryPage_t& v) {
    v.name = j.at("name").get<std::string>();
    v.summary = j.at("summary").get<std::map<std::string, uint32_t>>();
    v.current = j.at("current").get<bool>();
    v.masteries = j.at("masteries").get<std::vector<LolCollectionsCollectionsMastery_t>>();
    v.id = j.at("id").get<uint32_t>();
  }
  inline std::string to_string(const LolCollectionsCollectionsMasteryPage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
