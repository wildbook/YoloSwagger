#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizerStatus_t {
    std::string_t locale;
    std::string_t region;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    uint32_t_t allowedCharsCount;
    bool_t ready;
    uint32_t_t projectedCharsCount;
    uint32_t_t breakingCharsCount;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerStatus_t& v) {
    j["locale"] = v.locale;
    j["region"] = v.region;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["ready"] = v.ready;
    j["projectedCharsCount"] = v.projectedCharsCount;
    j["breakingCharsCount"] = v.breakingCharsCount;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerStatus_t& v) {
    v.locale = j.at("locale").get<std::string_t>();
    v.region = j.at("region").get<std::string_t>();
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>();
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t_t>();
    v.ready = j.at("ready").get<bool_t>();
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t_t>();
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t_t>();
  }
  inline std::string to_string(const SanitizerSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
