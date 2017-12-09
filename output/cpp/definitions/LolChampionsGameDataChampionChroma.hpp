#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampionsGameDataChampionChroma_t {
    int32_t id;
    std::vector<std::string> colors;
    std::string chromaPath;
  };

  inline void to_json(nlohmann::json& j, const LolChampionsGameDataChampionChroma_t& v) {
    j["id"] = v.id;
    j["colors"] = v.colors;
    j["chromaPath"] = v.chromaPath;
  }

  inline void from_json(const nlohmann::json& j, LolChampionsGameDataChampionChroma_t& v) {
    v.id = j.at("id").get<int32_t>();
    v.colors = j.at("colors").get<std::vector<std::string>>();
    v.chromaPath = j.at("chromaPath").get<std::string>();
  }
  inline std::string to_string(const LolChampionsGameDataChampionChroma_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
