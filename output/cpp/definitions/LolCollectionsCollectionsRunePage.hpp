#pragma once
#include <json.hpp>
#include <optional>
#include "LolCollectionsCollectionsRune.hpp"
namespace leagueapi {
  struct LolCollectionsCollectionsRunePage_t {
    uint32_t id;
    std::vector<LolCollectionsCollectionsRune_t> runes;
    std::string name;
    bool current;
  };

  inline void to_json(nlohmann::json& j, const LolCollectionsCollectionsRunePage_t& v) {
    j["id"] = v.id;
    j["runes"] = v.runes;
    j["name"] = v.name;
    j["current"] = v.current;
  }

  inline void from_json(const nlohmann::json& j, LolCollectionsCollectionsRunePage_t& v) {
    v.id = j.at("id").get<uint32_t>();
    v.runes = j.at("runes").get<std::vector<LolCollectionsCollectionsRune_t>>();
    v.name = j.at("name").get<std::string>();
    v.current = j.at("current").get<bool>();
  }
  inline std::string to_string(const LolCollectionsCollectionsRunePage_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
