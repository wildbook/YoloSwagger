#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct SanitizerSanitizerStatus_t {
    uint32_t projectedCharsCount;
    bool ready;
    std::string locale;
    uint32_t allowedCharsCount;
    std::string region;
    std::map<std::string, uint32_t> filteredWordCountsByLevel;
    uint32_t breakingCharsCount;
  };

  inline void to_json(nlohmann::json& j, const SanitizerSanitizerStatus_t& v) {
    j["projectedCharsCount"] = v.projectedCharsCount;
    j["ready"] = v.ready;
    j["locale"] = v.locale;
    j["allowedCharsCount"] = v.allowedCharsCount;
    j["region"] = v.region;
    j["filteredWordCountsByLevel"] = v.filteredWordCountsByLevel;
    j["breakingCharsCount"] = v.breakingCharsCount;
  }

  inline void from_json(const nlohmann::json& j, SanitizerSanitizerStatus_t& v) {
    v.projectedCharsCount = j.at("projectedCharsCount").get<uint32_t>();
    v.ready = j.at("ready").get<bool>();
    v.locale = j.at("locale").get<std::string>();
    v.allowedCharsCount = j.at("allowedCharsCount").get<uint32_t>();
    v.region = j.at("region").get<std::string>();
    v.filteredWordCountsByLevel = j.at("filteredWordCountsByLevel").get<std::map<std::string, uint32_t>>();
    v.breakingCharsCount = j.at("breakingCharsCount").get<uint32_t>();
  }
  inline std::string to_string(const SanitizerSanitizerStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
