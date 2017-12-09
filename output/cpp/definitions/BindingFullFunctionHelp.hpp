#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
#include "BindingFullArgumentHelp.hpp"
namespace leagueapi {
  // Describes a function.
  struct BindingFullFunctionHelp_t {
    std::string description;
    bool threadSafe;
    std::string async;
    std::string name;
    std::vector<std::string> tags;
    BindingFullTypeIdentifier_t returns;
    std::string help;
    std::vector<BindingFullArgumentHelp_t> arguments;
    std::string nameSpace;
  };

  inline void to_json(nlohmann::json& j, const BindingFullFunctionHelp_t& v) {
    j["description"] = v.description;
    j["threadSafe"] = v.threadSafe;
    j["async"] = v.async;
    j["name"] = v.name;
    j["tags"] = v.tags;
    j["returns"] = v.returns;
    j["help"] = v.help;
    j["arguments"] = v.arguments;
    j["nameSpace"] = v.nameSpace;
  }

  inline void from_json(const nlohmann::json& j, BindingFullFunctionHelp_t& v) {
    v.description = j.at("description").get<std::string>();
    v.threadSafe = j.at("threadSafe").get<bool>();
    v.async = j.at("async").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.returns = j.at("returns").get<BindingFullTypeIdentifier_t>();
    v.help = j.at("help").get<std::string>();
    v.arguments = j.at("arguments").get<std::vector<BindingFullArgumentHelp_t>>();
    v.nameSpace = j.at("nameSpace").get<std::string>();
  }
  inline std::string to_string(const BindingFullFunctionHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
