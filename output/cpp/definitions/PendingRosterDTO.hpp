#pragma once
#include <json.hpp>
#include <optional>
#include "PendingRosterMemberDTO.hpp"
#include "TicketOfferDTO.hpp"
#include "FailedInvite.hpp"
#include "PendingRosterInviteeDTO.hpp"
namespace leagueapi {
  struct PendingRosterDTO_t {
    std::string invitationId;
    std::vector<TicketOfferDTO_t> ticketOffers;
    int32_t logoColor;
    int64_t tournamentId;
    uint64_t captainId;
    int32_t logo;
    std::vector<PendingRosterInviteeDTO_t> invitees;
    std::string shortName;
    std::string name;
    std::vector<PendingRosterMemberDTO_t> members;
    int32_t tier;
    std::vector<FailedInvite_t> inviteFaileds;
  };

  inline void to_json(nlohmann::json& j, const PendingRosterDTO_t& v) {
    j["invitationId"] = v.invitationId;
    j["ticketOffers"] = v.ticketOffers;
    j["logoColor"] = v.logoColor;
    j["tournamentId"] = v.tournamentId;
    j["captainId"] = v.captainId;
    j["logo"] = v.logo;
    j["invitees"] = v.invitees;
    j["shortName"] = v.shortName;
    j["name"] = v.name;
    j["members"] = v.members;
    j["tier"] = v.tier;
    j["inviteFaileds"] = v.inviteFaileds;
  }

  inline void from_json(const nlohmann::json& j, PendingRosterDTO_t& v) {
    v.invitationId = j.at("invitationId").get<std::string>();
    v.ticketOffers = j.at("ticketOffers").get<std::vector<TicketOfferDTO_t>>();
    v.logoColor = j.at("logoColor").get<int32_t>();
    v.tournamentId = j.at("tournamentId").get<int64_t>();
    v.captainId = j.at("captainId").get<uint64_t>();
    v.logo = j.at("logo").get<int32_t>();
    v.invitees = j.at("invitees").get<std::vector<PendingRosterInviteeDTO_t>>();
    v.shortName = j.at("shortName").get<std::string>();
    v.name = j.at("name").get<std::string>();
    v.members = j.at("members").get<std::vector<PendingRosterMemberDTO_t>>();
    v.tier = j.at("tier").get<int32_t>();
    v.inviteFaileds = j.at("inviteFaileds").get<std::vector<FailedInvite_t>>();
  }
  inline std::string to_string(const PendingRosterDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
