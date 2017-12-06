#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsGameDataChampionChroma_t {
    std::string chromaPath;
    std::vector<std::string> colors;
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionChroma_t& v) {
    j["chromaPath"] = v.chromaPath;
    j["colors"] = v.colors;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionChroma_t& v) {
    v.chromaPath = j.at("chromaPath").get<std::string>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.id = j.at("id").get<int32_t>();
  }
}
